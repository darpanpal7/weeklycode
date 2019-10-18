# Lisa's Workbook
Constraints are very low so you shouldn't care about the complexity.

We want to iterate over chapters and maybe over problems for each chapter. Creating a variable  `page`  should be useful. For each new chapter you can either find a formula for the number of new pages it creates (more info below) or you can iterate over all  ***arr[i]*** problems in a chapter and after each index divisible by ***k*** increase a variable  `page`  by one. You must also increase  `page`  after the last problem of the chapter. Be careful about the situation where the last problem has index divisible by ***k*** — you shouldn't increase  `page`  twice then. The complexity is ***O(n)*** . It would be enough to get AC even for much higher constraints.
