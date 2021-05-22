Blockly.JavaScript['easydim_write'] = function(block) {
	var value_value = Blockly.JavaScript.valueToCode(block, 'value', Blockly.JavaScript.ORDER_ATOMIC) || "0";

	var code = 'DEV_I2C1.EasyDim(0, 0x10).write(' + value_value + ');\n';
	return code;
};
