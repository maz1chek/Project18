#include <iostream>

int main()
{
    // task 1
   /*const int MONTHS = 12;
    int profit[MONTHS];
    int start, end;

    std::cout << "Enter the profit for each of the 12 months:\n";


    for (int i = 0; i < MONTHS; i++)
    {
        std::cout << "Month " << (i + 1) << ": ";
        std::cin >> profit[i];
    }

    std::cout << "Enter the start and end month (between 1 and 12): ";
    std::cin >> start >> end;

    if (start < 1 || end > 12 || start > end)
    {
        std::cout << "Invalid range. Please enter a valid range between 1 and 12.\n";
        return 1;
    }

    int maxpf = profit[start - 1];
    int minpf = profit[start - 1];

    int maxM = start;
    int minM = start;

    for (int i = start; i <= end; i++)
    {
        if (profit[i - 1] > maxpf)
        {
            maxpf = profit[i - 1];
            maxM = i;
        }
        if (profit[i - 1] < minpf)
        {
            minpf = profit[i - 1];
            minM = i;
        }
    }


    std::cout << "The month with the maximum profit is: " << maxM << " (Profit: " << maxpf << ")\n";
    std::cout << "The month with the minimum profit is: " << minM << " (Profit: " << minpf << ")";


    return 0;*/



    // task 2 

    /*
    int X;
    std::cout << "Enter the number of elements (N): ";
    std::cin >> X;

    if (X <= 0)
    {
        std::cout << "The number of elements must be positive." << std::endl;
        return 1;
    }

    double* array = new double[X];
    std::cout << "Enter " << X << " real numbers:" << std::endl;

    for (int i = 0; i < X; i++)
    {
        std::cin >> array[i];
    }

    double sumNegative = 0;

    for (int i = 0; i < X; i++)
    {
        if (array[i] < 0)
        {
            sumNegative += array[i];
        }
    }

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < X; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }


    if (minIndex > maxIndex)
    {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }

    double productBetweenMinMax = 1;
    bool hasElementsBetween = (minIndex + 1 < maxIndex);

    if (hasElementsBetween)
    {
        for (int i = minIndex + 1; i < maxIndex; i++)
        {
            productBetweenMinMax *= array[i];
        }
    }
    else
    {
        productBetweenMinMax = 0;
    }


    double productEvenIndex = 1;

    for (int i = 0; i < X; i += 2)
    {
        productEvenIndex *= array[i];
    }

    int firstNegative = -1, lastNegative = -1;
    for (int i = 0; i < X; i++)
    {
        if (array[i] < 0)
        {
            if (firstNegative == -1)
            {
                firstNegative = i;
            }
            lastNegative = i;
        }
    }

    double sumBetweenNegatives = 0;

    if (firstNegative != -1 && lastNegative != -1 && firstNegative < lastNegative)
    {
        for (int i = firstNegative + 1; i < lastNegative; i++) {
            sumBetweenNegatives += array[i];
        }
    }

    std::cout << "Sum of negative elements: " << sumNegative << std::endl;
    std::cout << "Product of elements between min and max: " << productBetweenMinMax << std::endl;
    std::cout << "Product of elements with even indices: " << productEvenIndex << std::endl;
    std::cout << "Sum of elements between the first and last negative elements: " << sumBetweenNegatives;


    return 0;
    */

    //task 3

/*
    int Y;
    std::cout << "Enter the number of elements (N): ";
    std::cin >> Y;

    if (Y <= 0)
    {
        std::cout << "The number of elements must be positive." << std::endl;
        return 1;
    }

    double* array = new double[Y];
    std::cout << "Enter " << Y << " real numbers:" << std::endl;

    for (int i = 0; i < Y; i++)
    {
        std::cin >> array[i];
    }

    int nonZeroCount = 0;

    for (int i = 0; i < Y; i++)
    {
        if (array[i] != 0) {
            array[nonZeroCount] = array[i];
            nonZeroCount++;
        }
    }


    for (int i = nonZeroCount; i < Y; i++)
    {
        array[i] = -1;
    }

    std::cout << "Modified array:" << std::endl;

    for (int i = 0; i < Y; i++)
    {
        std::cout << array[i] << " ";
    }


    return 0;
    */


    // task 4


  /*
      const int size1 = 5;
      const int size2 = 6;
      const int size3 = 12;
      double array[size1];
      double array1[size2];
      double result[size3];

      std::cout << "Enter 5 elements for the first array:" << std::endl;

      for (int i = 0; i < size1; i++)
      {
          std::cin >> array[i];
      }

      std::cout << "Enter 5 elements for the second array:" << std::endl;

      for (int i = 0; i < size2; i++)
      {
          std::cin >> array1[i];
      }

      int index = 0;

      for (int i = 0; i < size1; i++)
      {
          if (array[i] > 0)
          {
              result[index] = array[i];
              index++;
          }
      }
      for (int i = 0; i < size2; i++)
      {
          if (array1[i] > 0)
          {
              result[index] = array1[i];
              index++;
          }
      }



      for (int i = 0; i < size1; i++)
      {
          if (array[i] == 0)
          {
              result[index] = array[i];
              index++;
          }
      }
      for (int i = 0; i < size2; i++)
      {
          if (array1[i] == 0)
          {
              result[index] = array1[i];
              index++;
          }
      }


      for (int i = 0; i < size1; i++)
      {
          if (array[i] < 0)
          {
              result[index] = array[i];
              index++;
          }
      }
      for (int i = 0; i < size2; i++)
      {
          if (array1[i] < 0)
          {
              result[index] = array1[i];
              index++;
          }
      }

      std::cout << "Resulting array:" << std::endl;
      for (int i = 0; i < size3; i++)
      {
          std::cout << result[i] << " ";
      }


      return 0;

  */

  // task 5 

 /*
     const int size = 14;
     const int halfSize = 3;
     double sArray[size];
     double fHalf[halfSize];
     double sHalf[halfSize];


     std::cout << "Enter 10 elements for the source array:" << std::endl;
     for (int i = 0; i < size; i++)
     {
         std::cin >> sArray[i];
     }

     for (int i = 0; i < halfSize; i++)
     {
         fHalf[i] = sArray[i];
     }

     for (int i = 0; i < halfSize; i++)
     {
         sHalf[i] = sArray[i + halfSize];
     }

     std::cout << "First half array:" << std::endl;

     for (int i = 0; i < halfSize; i++)
     {
         std::cout << fHalf[i] << " ";
     }
     std::cout << std::endl;



     std::cout << "Second half array:" << std::endl;

     for (int i = 0; i < halfSize; i++)
     {
         std::cout << sHalf[i] << " ";
     }


     return 0;

     */


     // task  6 

     /*
         const int size = 6;
         double array1[size];
         double array2[size];
         double result[size];

         std::cout << "Enter " << size << " elements for the first array:" << std::endl;

         for (int i = 0; i < size; i++)
         {
             std::cin >> array1[i];
         }

         std::cout << "Enter " << size << " elements for the second array:" << std::endl;

         for (int i = 0; i < size; i++)
         {
             std::cin >> array2[i];
         }

         for (int i = 0; i < size; i++)
         {
             result[i] = array1[i] + array2[i];
         }

         std::cout << "Resulting array after element-wise addition:" << std::endl;

         for (int i = 0; i < size; i++)
         {
             std::cout << result[i] << " ";
         }

         return 0;*/
}
