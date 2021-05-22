Blockly.Blocks["easydim_write"] = {
	init: function() {
		this.jsonInit({
			"type": "easydim_write",
			"message0": Blockly.Msg.EASYDIM_WRITE_MESSAGE,
			"args0": [
				{
					"type": "input_value",
					"name": "value",
					"check": "Number"
				}
			],
			"inputsInline": true,
			"previousStatement": null,
			"nextStatement": null,
			"colour": 120,
			"tooltip": Blockly.Msg.EASYDIM_WRITE_TOOLTIP,
			"helpUrl": "https://www.artronshop.co.th/"
		});
	}, // custom xmlToolbox
	xmlToolbox: function() {
		return $(document.createElement('block')).attr({
			type: 'easydim_write'
		}).append('\
		    <value name="value">\
                <shadow type="math_number">\
                    <field name="VALUE">50</field>\
                </shadow>\
            </value>'
	   );
   }
};

