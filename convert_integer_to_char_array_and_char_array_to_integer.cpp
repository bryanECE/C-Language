#include <math.h> //--> log10(), fmod() ...

int ipow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}

template <class NumType> void NumToChar(NumType num,char* arr)
{
    NumType Ziffer;
    NumType S;
    NumType ST = 0;


    S = (NumType)(log10((double)num)-fmod(log10((double)num),1))+1;

    //size of the array = (int)(log10((double)num)-fmod(log10((double)num),1))




    for(ST = 0; ST < S; ST=ST+1)
    {
        Ziffer = (num%(NumType)ipow(10,S-ST)-num%(NumType)ipow(10,S-1-ST))/((NumType)ipow(10,S-1-ST));
        arr[ST] = (char)(48+Ziffer);
    }



}

template <class NumTypes> NumTypes CharToNum(char* arr, NumTypes arr_size)
{

    NumTypes result = 0;


    NumTypes ic;

    for(ic = 0; ic<arr_size;result++)
    {
        if(arr[ic]>47&&arr[ic]<58)
        {
            ic++;
        }
    }




    for(NumTypes o = ic; o > 0; o--)
    {
        if(arr[ic]>47&&arr[ic]<58)
        {
            result = result + ((NumTypes)(arr[ic-o]-48))*(NumTypes)ipow(10,o);
        }


    }

    return result;
}