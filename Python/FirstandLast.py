def first(nums,target):
    low = 0;high = low+1;

    while(low <= high):
        mid = low + ((high-low)//2)

        if(nums[mid] == target):
            #Scan the left part 

            if(mid == 0 or nums[mid-1] != target):
                return mid
            else:
                high = mid-1
        
        elif(nums[mid] < target):
            low = mid+1
        
        else:
            high = mid-1
    
    return -1

def last(nums,target):
    low = 0;high = len(nums)-1

    while(low <= high):
        mid = low + ((high - low)//2)

        if(nums[mid] == target):
            #Scan the right part 

            if(mid == len(nums)-1 or nums[mid+1] != target):
                return mid
            else:
                low = mid+1
            
        elif(nums[mid] < target):
            low = mid +1 
            
        else:
            high = mid-1
    
    return -1


#drivercode
if __name__ == "__main__":
    nums = [5, 7, 7, 8, 8, 10]
    target = 8

    res = [first(nums,target),last(nums,target)]

    print();
    print(res)