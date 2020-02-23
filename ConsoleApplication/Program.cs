using System;
using System.Runtime.InteropServices;

namespace ConsoleApplication
{
    class Program
    {
        [DllImport("NativeLibrary.dll")]
        public static extern void HelloWorld();

        [DllImport("NativeLibrary.dll", EntryPoint = "Add")]
        public static extern int AddNumbers(int num1, int num2);

        [DllImport("NativeLibrary.dll")]
        public static extern bool IsLengthGreaterThan5(string value);

        [DllImport("NativeLibrary.dll")]
        [return: MarshalAs(UnmanagedType.BStr)]
        public static extern string GetName();

        static void Main(string[] args)
        {
            Console.ReadLine();
        }
    }
}
