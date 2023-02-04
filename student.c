#include "student.h"

int largest(int array[], int length)
{
  int max = array[0];

  for (int i = 1; i < length; i++)
  {

    if (array[i] > max)
    {
      max = array[i];
    }
  }
  return max;
}

int sum(int array[], int length)
{
  int array_sum = 0;

  for (int i = 0; i < length; i++)
  {
    array_sum += array[i];
  }
  return array_sum;
}

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void rotate(int *a, int *b, int *c)
{
  int t = *a;
  *a = *c;
  *c = *b;
  *b = t;
}

void sort(int array[], int length)
{
  int i;
  int j;

  for (i = 0; i < length - 1; i++)
  {

    for (j = 0; j < length - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        int t = array[j];
        array[j] = array[j + 1];
        array[j + 1] = t;
      }
    }
  }
}

int prime(int length)
{
  int j;

  if (length <= 1)
  {
    return 0;
  }
  for (j = 2; j < length; j++)
  {

    if (length % j == 0)
    {
      return 0;
    }
  }

  return 1;
}

void double_primes(int array[], int length)
{
  int i;

  for (i = 0; i < length; i++)
  {

    if (prime(array[i]))
    {
      array[i] *= 2;
    }
  }
}

double power(double i, int j)
{
  double result = 1;
  int x;

  for (x = 0; x < j; x++)
  {
    result *= i;
  }

  return result;
}

int number_length(int x)
{
  int length = 0;

  while (x > 0)
  {
    length++;
    x /= 10;
  }

  return length;
}

int armstrong_number(int x)
{
  int length = number_length(x);
  int sum = 0;
  int num = x;

  while (x > 0)
  {
    int digit = x % 10;
    sum += power(digit, length);
    x /= 10;
  }

  return (sum == num);
}

void negate_armstrongs(int array[], int length)
{
  int i;

  for (i = 0; i < length; i++)
  {

    if (armstrong_number(array[i]))
    {
      array[i] = -array[i];
    }
  }
}
