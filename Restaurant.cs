using System;

public class Restaurant
{
    private string name;
    private string address;
    private string gratuityRate;

    public string Name
    {
        get { return name; }
        set { name = value; }
    }

    public string Address
    {
        get { return address; }
        set { address = value; }
    }

    public string GratuityRate
    {
        get { return gratuityRate; }
        set 
        {
            
            {
                gratuityRate = value;
            }
        }

    }
    public Restaurant(string name, string address, string gratuityRate)
    {
        Name = name;
        Address = address;
        GratuityRate = gratuityRate;
    }

    public void GenerateReceipt()
    {
        double price = 0;
        double subtotal = 0;
        double gratuityAmount = 0;
        double grandTotal = 0;
        int people = 0;

        while (price != -1)
        {
            subtotal = subtotal + price;
            Console.Write("Enter price of food item: [-1 to quit]");
            price = Convert.ToDouble(Console.ReadLine());
        }

        Console.Write("How many people in party: ");
        people = Convert.ToInt32(Console.ReadLine());

        if (people >= 6)
        {
            gratuityAmount = subtotal + grandTotal;
        }
        grandTotal = subtotal + gratuityAmount;

        Console.WriteLine("Subtotal: {0}", subtotal);
        Console.WriteLine("{0} Gratuity: {1}", gratuityRate, gratuityAmount);
        Console.WriteLine("Grand Total: {0}", grandTotal);
    }
}