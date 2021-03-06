<!-- Template for user row -->
<script type="text/x-kendo-tmpl" id="tpl-user-entry">
	<tr class="sw-list-entry gradient-bg">
		<td class="ellipsis" style="max-width: 100px; title="#:username#"">#:username#</td>
		<td class="ellipsis" style="max-width: 100px;" title="#:firstName#">#:firstName#</td>
		<td class="ellipsis" style="max-width: 100px;" title="#:lastName#">#:lastName#</td>
		<td class="ellipsis" style="max-width: 66px;" title="#:status#">#:status#</td>
		<td class="ellipsis" style="max-width: 100px;">#: formattedDate(data.lastLogin) #</td>
		<td class="ellipsis" style="max-width: 100px;">#: formattedDate(data.createdDate) #</td>
		<td class="ellipsis" style="max-width: 100px;">#: formattedDate(data.updatedDate) #</td>
		<td>
			<div style="width: 100%; text-align: center">
				<i class="fa fa-edit sw-action-glyph sw-edit-glyph" title="#= i18next("includes.EditUser") #"
					onclick="onEditUser(event, '#:username#')"></i>
				<i class="fa fa-remove sw-action-glyph sw-delete-glyph" title="# i18next("public.DeleteUser") #"
					onclick="onDeleteUser(event, '#:username#')"></i>
			</div>
		</td>
	</tr>
</script>