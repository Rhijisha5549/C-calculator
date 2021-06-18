using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Oops
{
    class Program
    {
        static void Main(string[] args)
        {
            Calculator cal = new Calculator();
            Console.WriteLine("first value");
            cal.a = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("second value");
            cal.b = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("New value is");
            cal.add();
            cal.sub();
            Console.ReadKey();
        }
    }
}
