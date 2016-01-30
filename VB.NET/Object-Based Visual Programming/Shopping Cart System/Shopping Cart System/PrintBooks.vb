Public Class PrintBooks

    Private Sub btnAddtoCart_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnAddtoCart.Click
        Dim objMainForm As New MainForm
        If lstPrintBooks.SelectedIndex <> -1 Then
            MainForm.lstBooks.Items.Add(lstPrintBooks.SelectedItem.ToString())
            MainForm.lblSubtotal.Text = (CDbl(MainForm.lblSubtotal.Text) + objMainForm.BookCost(lstPrintBooks.SelectedIndex)).ToString()
            MainForm.lblTax.Text = ((CDbl(MainForm.lblSubtotal.Text)) * 6 / 100).ToString()
            MainForm.lblShipping.Text = ((MainForm.lstBooks.Items.Count) * 2).ToString()
            MainForm.lblTotal.Text = (CDbl(MainForm.lblSubtotal.Text) + CDbl(MainForm.lblTax.Text) + CDbl(MainForm.lblShipping.Text)).ToString()
        End If
    End Sub

    Private Sub btnClose_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClose.Click
        ' Close
        Me.Close()
    End Sub
End Class