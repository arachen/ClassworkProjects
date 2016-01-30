Public Class MainForm

    ' Variables
    Public BookCost() As Double = {11.95, 14.95, 29.95, 18.5}
    Public AudioCost() As Double = {29.95, 11.5, 14.5, 12.95}
    Public Books() As String = {"I Did It Your Way", "The History of Scotland", "Learn Calculus in One Day", "Feel the Stress"}
    Public Audios() As String = {"Learn Calculus in One Day", "Relaxation Techniques", "The History of Scotland", "The Science of Body Language"}

    Private Sub mnuProductsPrintBooks_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuProductsPrintBooks.Click
        Dim frmPrintBooks As New PrintBooks

        frmPrintBooks.Visible = True
    End Sub

    Private Sub mnuProductsAudioBooks_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuProductsAudioBooks.Click
        Dim frmAudioBooks As New AudioBooks

        frmAudioBooks.Visible = True
    End Sub

    Private Sub mnuFileReset_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuFileReset.Click
        lstBooks.Text = ""
        lblShipping.Text = ""
        lblTax.Text = ""
        lblTotal.Text = ""
        lblSubtotal.Text = ""
    End Sub

    Private Sub mnuHelpAbout_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuHelpAbout.Click
        MessageBox.Show("Shopping Cart System version 1.0")
    End Sub

    Private Sub mnuFileExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuFileExit.Click
        ' Close the form.
        Me.Close()
    End Sub

    Private Sub MainForm_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        lblSubtotal.Text = "0"
    End Sub

    Private Sub btnRemove_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnRemove.Click
        If lstBooks.SelectedIndex <> -1 Then
            Dim i As Integer = 0
            For Each s As String In Books
                If s = lstBooks.SelectedItems.ToString() Then
                    lblSubtotal.Text = CStr(CDbl(lblSubtotal.Text) - BookCost(i))
                    lblTax.Text = CStr(CDbl(lblSubtotal.Text) * 6 / 100)
                    lblShipping.Text = CStr(CDbl(lblShipping.Text) - 2)
                    lblTotal.Text = CStr(CDbl(lblSubtotal.Text) +
                        CDbl(lblTax.Text) + CDbl(lblShipping.Text))
                End If
                i = i + 1
            Next
            i = 0
            For Each a As String In Audios
                If a = lstBooks.SelectedItem.ToString() Then
                    lblSubtotal.Text = CStr(CDbl(lblSubtotal.Text) - AudioCost(i))
                    lblTax.Text = CStr(CDbl(lblSubtotal.Text) * 6 / 100)
                    lblShipping.Text = CStr(CDbl(lblShipping.Text) - 2)
                    lblTotal.Text = CStr(CDbl(lblSubtotal.Text) +
                        CDbl(lblTax.Text) + CDbl(lblShipping.Text))
                End If
                i = i + 1
            Next
            lstBooks.Items.RemoveAt(lstBooks.SelectedIndex)
        End If
    End Sub
End Class
