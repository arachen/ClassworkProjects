Public Class Form1

    Private Sub btnCalculate_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCalculate.Click
        ' Declare variables for the calculations.
        Dim decRadius As Decimal                    ' Pizza radius
        Dim decArea As Decimal                      ' Area of pizza
        Dim intSlices As Integer                    ' # of slices
        Const decPI As Decimal = 3.14159D           ' Pi
        Const decSLICE_AREA As Decimal = 14.125D     ' Slice area

        Try
            ' Calculate and display number of slices
            decRadius = CDec(txtDiameter.Text) / 2

            decArea = decRadius * decRadius * decPI

            intSlices = CInt(decArea / decSLICE_AREA)
            lblSlices.Text = intSlices.ToString("d")
        Catch ex As Exception
            ' Error message
            MessageBox.Show("All input must be valid numeric values.")
        End Try
    End Sub

    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
