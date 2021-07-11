using System;
public class RestaurantTest
{
    private const double V = .15;
    public static void Main(string[] args)
    {
        Restaurant obj = new Restaurant("Dairy Queen", "123 Main", "V");
        obj.GenerateReceipt();
    }
}
