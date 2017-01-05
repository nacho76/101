<!--@subject Hola, {{var customer.name}} @-->
<!--@vars
{"store url=\"\"":"Store Url",
"var logo_url":"Email Logo Image Url",
"var logo_alt":"Email Logo Image Alt",
"store url=\"customer/account/\"":"Customer Account Url",
"htmlescape var=$customer.name":"Customer Name",
"var customer.email":"Customer Email",
"store url=\"customer/account/confirm/\" _query_id=$customer.id _query_key=$customer.confirmation _query_back_url=$back_url":"Confirmation Url",
"htmlescape var=$customer.password":"Customer password"}
@-->

<body style="background:#F6F6F6; font-family:Verdana, Arial, Helvetica, sans-serif;font-size:16px; margin:0; padding:0;">
<div style="background:#F6F6F6; font-family:Verdana, Arial, Helvetica, sans-serif;font-size:16px; margin:0; padding:0;">
<table cellspacing="0" cellpadding="0" border="0" height="100%" width="100%">
        <tr>
            <td align="center" valign="top" style="padding:20px 0 20px 0">
                <!-- [ header starts here] -->
                <table bgcolor="FFFFFF" cellspacing="0" cellpadding="10" border="0" width="650" style="border:1px solid #E0E0E0;">
                    <tr>
                    <td valign="top" align="center">
                            <a href="{{store url=""}}"><img src="{{var logo_url}}" alt="{{var logo_alt}}" style="margin-bottom:10px;" border="0"/></a>
                        </td>
                    </tr>
                    <!-- [ middle starts here] -->
                    <tr>
                        <td valign="top">
                            <p style="font-size: 16px; line-height: 20px; margin: 0;">Hola <strong>{{htmlescape var=$customer.name}}</strong>,<br/><br/>
							Bienvenido a {{var store.getFrontendName()}}. Por favor, confirma tu e-mail {{var customer.email}}:</p>
							<br/>
							<p style="font-size: 16px; line-height: 20px; margin: 0;"><a href="{{store url='customer/account/confirm/' _query_id=$customer.id _query_key=$customer.confirmation _query_back_url=$back_url}}" style="display: block; width: 100%; padding: 8px 0px 8px 0px; margin: 5px 0px 10px 0px; text-align: center; background-color: #E59304; color: #fff; text-decoration: none;"> CONFIRMAR EMAIL</a></p>
							<br/>
                            <p style="border:1px solid #BEBCB7; padding:13px 18px; background:#F8F7F5; ">
                                <b>E-mail:</b> {{var customer.email}}<br/>
                                <b>Contrase&ntilde;a:</b> {{htmlescape var=$customer.password}}<p style="font-size: 16px; line-height: 20px; margin: 0;">
							</p>
							<br/>                            
                            <p style="font-size: 16px; line-height: 20px; margin: 0;"><small>Cont&aacute;ctanos en <a href="mailto:{{config path='trans_email/ident_support/email'}}" style="color:#1E7EC8;">{{config path='trans_email/ident_support/email'}}</a> o ll&aacute;manos {{config path='general/store_information/phone'}}.</small></p>
                        </td>
                    </tr>
					<tr>
                        <td bgcolor="#EAEAEA" align="center" style="background:#EAEAEA; text-align:center;"><center><p style="font-size:12px; margin:0;">S&iacute;guenos en <a href="#" target="_blank" title="Tu empresa" style="color: #E59304; text-decoration:none; font-weight:bold;" >Facebook</a></p></center></td>
                    </tr>
                </table>
            </td>
        </tr>
    </table>
</div>
