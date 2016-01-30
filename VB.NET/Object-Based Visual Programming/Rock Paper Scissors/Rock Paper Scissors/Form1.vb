Public Class Form1
    Dim cmpSelection As String
    Public Sub computerChoice()
        Dim rand As New Random
        Dim RPS(2) As String
        RPS(0) = "Rock"
        RPS(1) = "Paper"
        RPS(2) = "Scissor"

        Dim strSelected As String
        picRock.BorderStyle = BorderStyle.None
        picScissors.BorderStyle = BorderStyle.None
        picScissors.BorderStyle = BorderStyle.None
        strSelected = CStr(rand.Next(3))

        If CDbl(strSelected) = 0 Then
            picComputer.Image = picRock.Image
        ElseIf CDbl(strSelected) = 1 Then
            picComputer.Image = picPaper.Image
        ElseIf CDbl(strSelected) = 2 Then
            picComputer.Image = picScissors.Image
        End If

        cmpSelection = RPS(CInt(strSelected))

        lblComputerChoice.Text = String.Empty
    End Sub

    Private Sub picRock_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles picRock.Click
        computerChoice()
        If cmpSelection = "Rock" Then
            If (MessageBox.Show("Tie! Play again?", "Tie", MessageBoxButtons.YesNo).Equals(DialogResult.No)) Then
                Me.Close()
            End If
        ElseIf cmpSelection = "Paper" Then
            lblComputerChoice.Text = "Computer wins, paper covers rock!"
        ElseIf cmpSelection = "Scissor" Then
            lblComputerChoice.Text = "Rock crushes scissors!"
        End If
        picRock.BorderStyle = BorderStyle.FixedSingle
    End Sub

    Private Sub picPaper_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles picPaper.Click
        computerChoice()

        If cmpSelection = "Rock" Then
            lblComputerChoice.Text = "Paper covers rock!"
        ElseIf cmpSelection = "Paper" Then
            If (MessageBox.Show("Tie! Play again?", "Tie", MessageBoxButtons.YesNo).Equals(DialogResult.No)) Then
                Me.Close()
            End If
        ElseIf cmpSelection = "Scissor" Then
            lblComputerChoice.Text = "Scissors cuts paper!"
        End If

        picPaper.BorderStyle = BorderStyle.FixedSingle
    End Sub

    Private Sub picScissors_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles picScissors.Click
        computerChoice()

        If cmpSelection = "Rock" Then
            lblComputerChoice.Text = "Rock crushes scissors!"
        ElseIf cmpSelection = "Paper" Then
            lblComputerChoice.Text = "Scissors cut paper!"
        ElseIf cmpSelection = "Scissor" Then
            If (MessageBox.Show("Tie! Play again?", "Tie", MessageBoxButtons.YesNo).Equals(DialogResult.No)) Then
                Me.Close()
            End If
        End If

        picScissors.BorderStyle = BorderStyle.FixedSingle
    End Sub

    Private Sub btnClear_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClear.Click
        lblComputerChoice.Text = String.Empty
        picRock.Focus()
    End Sub

    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
