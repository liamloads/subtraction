const _15_0 = [
	function(_15_0) {
		return '-' + _15_0;
	},
	function(_15_0) {
		const _15_1 = _15_0.length;
		let _15_2 = '';
		let _15_3 = 1;

		while (_15_3 !== _15_1) {
			_15_2 += _15_0[_15_3++];
		}

		return _15_2;
	}
];
const _15_1 = require('twexxor-addition-calculator');

const twexxorSubtractionCalculator = function(_15_2, _15_3) {
	_15_3 += '';
	return _15_1(_15_2, _15_0[(_15_3[0] === '-') - 0](_15_3));
};

if (typeof module !== 'undefined' && typeof module.exports !== 'undefined') {
	module.exports = twexxorSubtractionCalculator;
}
