main_array = [3,2,4,5,1]
for i in range(1,len(main_array)):
    j=i-1
    hold = main_array[i]
    while j>=0 and main_array[j]>hold:
        main_array[j+1]=main_array[j]
        j-=1
    main_array[j+1]=hold
print(main_array)
    
    