Public Class IndividualPlan

    Private Sub btnCalculate_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnCalculate.Click
        If radModel100.Checked Then
            lblPhoneSubtotal.Text = "" & 29.95
            lblTax.Text = "" & 29.95 * 6 / 100

        ElseIf radModel200.Checked Then
            lblPhoneSubtotal.Text = "" & 99.95
            lblTax.Text = "" & 99.95 * 6 / 100

        ElseIf radModel110.Checked Then
            lblPhoneSubtotal.Text = "" & 49.95
            lblTax.Text = "" & 49.95 * 6 / 100
        End If

        lblPhoneTotal.Text = CStr(CDbl(lblPhoneSubtotal.Text) + CDbl(lblTax.Text))

        Dim d As Double = 0

        If chkEmail.Checked Then
            d = 25
        End If

        If chkTextMessaging.Checked Then
            d = d + 10
        End If

        lblOptions.Text = "" & d

        If rad800MM.Checked Then
            lblPackageCharge.Text = "" & 45

        ElseIf rad1500MM.Checked Then
            lblPackageCharge.Text = "" & 65

        ElseIf radUnlimited.Checked Then
            lblPackageCharge.Text = "" & 99
        End If

        lblTotalMonthlyCharge.Text = CStr(CDbl(lblPhoneSubtotal.Text) + CDbl(lblTax.Text) + CDbl(lblPhoneTotal.Text) + CDbl(lblOptions.Text) + CDbl(lblPackageCharge.Text))
    End Sub

    Private Sub btnClose_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClose.Click
        Me.Close()
    End Sub
End Class