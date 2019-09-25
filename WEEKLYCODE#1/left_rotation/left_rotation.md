# Left  Rotation

To solve this challenge, we need to observe following things:

 - The array can be thought just like a ring for better visualization ,where the first and the last element of the the array are back to back to each other.
 - It is just this ring that is rotated ***d*** times.
 - Taking the concept of a ring ,it is clear that relative position of an element is never changed.
 - After each move ,we observe that the first element becomes the last element in the array form.
![4 left rotations](https://i.ibb.co/FDVRq79/1.png)
Here, we can see that in the first left rotation the first element that is 1 becomes the last element ,then in the second left rotation the second element of the initial array becomes the last element.
So after ***d*** left rotations the ***d*** th element becomes the last element. 
Now that we have understood what is happening here,
 -  We divide the initial array into two parts ,breaking it from the reference point d.
 -  Combining and printing the array ,first ***arr[d]*** to ***arr[n-1]*** and then back to back to
    this printing the elements ***arr[0]*** to ***arr[d-1]***
    
