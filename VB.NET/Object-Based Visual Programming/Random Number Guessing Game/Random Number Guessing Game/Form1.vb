Public Class Form1

    Private Sub btnGuess_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnGuess.Click
        Dim num1 As Integer = 1           ' To hold number
        Dim num As Integer = 1          ' To hold random number.
        Dim rand As New Random()
        num = rand.Next(100) + 1
        Do
            ' Getting input.
            Dim prompt As String = "Enter your guessing number: "
            num1 = CInt(CDbl(InputBox(prompt)))

            If num1 > num Then
                MessageBox.Show("Your guess was too high!")
            ElseIf num1 < num Then
                MessageBox.Show("Your guess was too low!")
            End If
        Loop Until num1 = num
        MessageBox.Show("Congratulations! You got it right!")
    End Sub

    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        ' Close the form.
        Me.Close()
    End Sub
End Class
