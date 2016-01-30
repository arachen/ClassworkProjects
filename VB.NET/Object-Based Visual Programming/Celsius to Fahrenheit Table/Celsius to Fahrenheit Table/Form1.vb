Public Class Form1

    Private Sub btnCalculate_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCalculate.Click
        ' Variables
        Dim dblCelsius As Double
        Dim dblFahrenheit As Double

        lstList.Items.Add("Celsius" + " " + " Fahrenheit")
        lstList.Items.Add("................")
        For dblCelsius = 0 To 20
            dblFahrenheit = 1.8 * dblCelsius + 32
            lstList.Items.Add(dblCelsius.ToString + "   :    " + dblFahrenheit.ToString())
        Next
    End Sub

    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        ' Clsoe the form.
        Me.Close()
    End Sub
End Class
