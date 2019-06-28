arr=[]
num=int(input("enter no. of elements: "))  #no. of elements in the array
for i in range(num):
	element=int(input("element"+str(i+1)+": "))
	arr.append(element)
print("Original array: ")
print(arr)
#sort function
def sorting(arr):
	for i in range(n):
		for j in range(i+1,n):
			if (arr[i]>arr[j]): 
				temp=arr[i]
				arr[i]=arr[j]
				arr[j]=temp
	return arr
print("sorted array: ")
print(sorted(arr))
