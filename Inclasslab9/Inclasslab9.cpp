#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::string shape;

        std::cout << "Enter a shape type (rectangle, circle, or cylinder): "
            << std::endl;
        std::cin >> shape;

        const float PI = 3.14159f;

        if (shape == "rectangle" || shape == "Rectangle")
        {
            float length, width;

            std::cout << "Enter the length and width: " << std::endl;
            std::cin >> length >> width;

            float area = length * width;
            float perimeter = 2 * (length + width);

            std::cout << "The area is: " << area << std::endl;
            std::cout << "The perimeter is: " << perimeter << std::endl;
        }
        else if (shape == "circle" || shape == "Circle")
        {
            float radius;

            std::cout << "Enter the radius: " << std::endl;
            std::cin >> radius;

            float area = PI * radius * radius;
            float circumference = 2 * PI * radius;

            std::cout << "The area is: " << area << std::endl;
            std::cout << "The circumference is: "
                << circumference << std::endl;
        }
        else if (shape == "cylinder" || shape == "Cylinder")
        {
            float radius, height;

            std::cout << "Enter the radius and height: " << std::endl;
            std::cin >> radius >> height;

            float volume = PI * radius * radius * height;
            float surfaceArea = 2 * PI * radius * radius
                + 2 * PI * radius * height;

            std::cout << "The volume is: " << volume << std::endl;
            std::cout << "The surface area is: "
                << surfaceArea << std::endl;
        }
        else
        {
            std::cout << "Unrecognized shape - try again?"
                << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}