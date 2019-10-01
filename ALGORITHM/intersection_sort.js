function iSort(array) {
	for (var i = 0; i < array.length; i++) {
		let value = array[i];
		let j = i - 1 
		while (j >= 0 && array[j] > value) {
			array[j+1] = array[j];
			j = j - 1;
		}
		array[j+1] = value;
	}
	return array;
}
var arr = [5, 12, 2, 30, 15, 20, 1, 7, 12, 3, 9, 6];
var sorted = iSort(arr);
console.log(sorted);
