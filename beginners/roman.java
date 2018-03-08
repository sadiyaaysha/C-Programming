public static int romanConvert(String roman)
{
    int decimal = 0;

    String romanNumeral = roman.toUpperCase();
    for(int x = 0;x<romanNumeral.length();x++)
    {
        char convertToDecimal = roman.charAt(x);

     
    if (romanNumeral.contains("IV"))
    {
        decimal-=2;
    }
    if (romanNumeral.contains("IX"))
    {
        decimal-=2;
    }
    if (romanNumeral.contains("XL"))
    {
        decimal-=10;
    }
    if (romanNumeral.contains("XC"))
    {
        decimal-=10;
    }
    if (romanNumeral.contains("CD"))
    {
        decimal-=100;
    }
    if (romanNumeral.contains("CM"))
    {
        decimal-=100;
    }
    return decimal;
}
