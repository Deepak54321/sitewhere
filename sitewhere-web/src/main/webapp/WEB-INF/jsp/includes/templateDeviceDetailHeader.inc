<style>
.sw-device-header {
	clear: both;
	border: 1px solid #dcdcdc;
	padding: 10px;
	margin-bottom: 15px;
	font-size: 12pt;
	text-align: left;
	display: block;
	min-height: 95px;
	position: relative;
}

.sw-device-header-label {
	font-size: 12pt;
	font-weight: bold;
	min-width: 200px;
	display: inline-block;
	line-height: 1.5;
}

.sw-device-header-logowrapper {
	float: left;
	margin-right: 40px;
	margin-left: 10px;
	width: 130px;
	height: 130px;
	position: relative;
}

.sw-device-header-logo-tag {
	position: absolute;
	top: -2px;
	left: -4px;
}

.sw-device-header-symbol {
	float: right;
	width: 140px;
	height: 140px;
	position: absolute;
	top: 13px;
	right: 13px;
	border: 1px solid #ddd;
}
</style>

<!-- Header for device detail page -->
<script type="text/x-kendo-tmpl" id="tpl-device-detail-header">
	<div class="sw-device-header gradient-bg">
		<div class="sw-device-header-logowrapper"
			style="background-image: url(#:specification.asset.imageUrl#); background-size: contain; background-repeat: no-repeat; background-position: 50% 50%;">
			<span class="label label-info sw-device-header-logo-tag">#= i18next("public.Device") #</span>
		</div>
		<div class="sw-device-header-symbol"
			style="background-image: url(/api/devices/#:hardwareId#/symbol?tenantAuthToken=${tenant.authenticationToken}); background-size: contain; background-repeat: no-repeat; background-position: 50% 50%;">
		</div>
		<div>
			<div>
				<span class="sw-device-header-label" title="Unique device hardware id">#= i18next("public.HardwareId") #:</span>
				<span title="#:hardwareId#">#:hardwareId#</span>
			</div>
			<div>
				<span class="sw-device-header-label" title="Device specification used">#= i18next("public.DeviceSpecification") #:</span>
				<span title="#:specification.name#"><a href='/admin/specifications/#:specification.token#.html'>#:specification.name#</a></span>
			</div>
			<div>
				<span class="sw-device-header-label" title="Site where device is deployed">#= i18next("public.DeployedSite") #:</span>
				<span title="#:site.name#"><a href='/admin/sites/#:site.token#.html'>#:site.name#</a></span>
			</div>
			<div>
				<span class="sw-device-header-label" title="Currently assigned asset">#= i18next("public.CurrentAssignment") #</span>
# if (data.assignment) { #
# if (assignment.assignmentType != 'Unassociated') { #
				<span title="#:assignment.assetName#"><a href='/admin/assignments/#:assignment.token#.html'>#:assignment.assetName#</a></span>
# } else { #
				<span title="Not associated with an asset">#= i18next("public.DeviceNotAssociated") #</span>
# } #
# } else { #
				<span title="Device is not assigned">#= i18next("devices.detail.DeviceNotAssignment") #:</span>
# } #
			</div>
			<div>
				<span class="sw-device-header-label" title="#= i18next("includes.i18next.DDWATTS") #">#= i18next("public.CreatedDate") #:</span>
				<span title="#: formattedDate(data.createdDate) #">#: formattedDate(data.createdDate) #</span>
			</div>
			<div>
				<span class="sw-device-header-label" title="#= i18next("includes.i18next.DDWLU") #">#= i18next("public.UpdatedDate") #:</span>
				<span title="#: formattedDate(data.createdDate) #">#: formattedDate(data.updatedDate) #</span>
			</div>
		</div>
	</div>
</script>
