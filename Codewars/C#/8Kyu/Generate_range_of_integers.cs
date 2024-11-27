/*
Implement the function generateRange which takes three arguments (start, stop, step) and returns the range of integers from start to stop (inclusive) in increments of step.

Examples
(1, 10, 1) -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
(-10, 1, 1) -> [-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1]
(1, 15, 20) -> [1]

Note:
start < stop
step > 0
*/

public class Kata
{
  public static int[] GenerateRange(int min, int max, int step)
  {
    int size = (max - min) / step + 1;
    int[] arr = new int[size];
    
    for (int i = 0; i < size; i++)
    {
          arr[i] = min;
          min += step;
    }
    
    return  arr;
  }
}