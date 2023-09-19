using System;

namespace 백준
{
    internal class Program
    {
        static void Main()
        {
            int S, R1, R2;
            string[] time = Console.ReadLine().Split(' ');

            R1 = int.Parse(time[0]);
            S = int.Parse(time[1]);

            R2 = (S * 2) - R1;
            Console.WriteLine(R2);
        }
    }
}