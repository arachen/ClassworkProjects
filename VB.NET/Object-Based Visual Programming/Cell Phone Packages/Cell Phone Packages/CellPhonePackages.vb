Public Class CellPhonePackages

    Private Sub btnIndividual_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnIndividual.Click
        Dim frmIndividual As New IndividualPlan

        frmIndividual.Visible = True
    End Sub

    Private Sub btnFamily_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnFamily.Click
        Dim frmFamily As New FamilyPlan

        frmFamily.Visible = True
    End Sub

    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        ' Close the form.
        Me.Close()
    End Sub
End Class
