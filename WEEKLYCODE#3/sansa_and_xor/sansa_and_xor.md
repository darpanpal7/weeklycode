# Sansa and Xor
As we know ***a^a = 0*** . When we write all substrings , we have to check how many numbers occur an even number of times and how many numbers occur an odd number of times. If the list is 0 indexed, the number at **i***th* index will occur ***(i+1)*******(n-i)*** times.

If n is even, either ***i+1*** or ***n-i*** will be even. Each number will occur an even number of times, and the answer will be 0 . If ***n*** is odd and ***i*** is even, the product of the XOR will be odd. In that case, the answer is the XOR of the even indexed elements.
