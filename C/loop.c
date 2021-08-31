// SLOVE PROBLEM STEP BY STEP

// For each integer  in the interval  (given as input) :
// If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if  and it is an even number, then print "even".
// Else if  and it is an odd number, then print "odd".
  
for(i=a;i<=b;i++)
    { 
      if(i<=9)
     {
      if(i==1)
      printf("one\n");
      else if(i==2)
      printf("two\n"); 
      else if(i==3)
      printf("three\n");
      else if(i==4)
      printf("four\n");
      else if(i==5)
      printf("five\n");
      else if(i==6)
      printf("six\n");
      else if(i==7)
      printf("seven\n");
      else if(i==8)
      printf("eight\n");
      else
      printf("nine\n");
     }         
    else 
     { 
       if(i%2==0)
        printf("even\n");
       else 
        printf("odd\n");    
     }    
    }
