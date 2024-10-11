#include <iostream>
#include <Windows.h>

float ChoiñePizza(float total_cost) {
	int choice{};

	const int pizza_types = 7;
	int pizza_prise[pizza_types]{100, 299, 249, 159, 299, 149, 399};

	int pizza_counter{};

	do {
		std::cout << "\n1. Ïåïïåðîíè (" << pizza_prise[0] << "ð.)"
			<< "\n2. ×åòûðå ñûðà (" << pizza_prise[1] << "ð.)"
			<< "\n3. Ìÿñíàÿ (" << pizza_prise[2] << "ð.)"
			<< "\n4. Äåðåâåíñêàÿ (" << pizza_prise[3] << "ð.)"
			<< "\n5. Ãàâàéñêàÿ (" << pizza_prise[4] << "ð.)"
			<< "\n6. Àññîðòè (" << pizza_prise[5] << "ð.)"
			<< "\n7. Ìîðñêàÿ (" << pizza_prise[6] << "ð.)"
			<< "\n\n0. Çàêîí÷èòü âûáîð\n ?> ";
		std::cin >> choice;

		pizza_counter ++;

		for (int i = 1; i < pizza_types+1; i++)
		{
			if (choice > pizza_types || choice < 0)
			{
				std::cout << "ÎØÈÁÊÀ\n";
				break;
			}
			else if (choice == 0)
			{
				break;
			}
			else if (choice == i) 
			{
				system("cls");
				std::cout << "Ñóììà: " << total_cost << " + " << pizza_prise[i-1] << " = " << total_cost + pizza_prise[i-1] << std::endl;
				total_cost += pizza_prise[i-1];
				break;
			}
		}
	
	} while (choice != 0);
	
	return total_cost;
}

float ChoiñeSnack(float total_cost) {
	int choice{};

	const int snack_types = 4;
	int snack_prise[snack_types]{ 100, 249, 149, 249};

	int snack_counter{};

	do {
		std::cout << "\n1. Ñåíäâè÷ âåò÷èíà è ñûð (" << snack_prise[0] << "ð.)"
			<< "\n2. Ïàñòà Êàðáîíàðà (" << snack_prise[1] << "ð.)"
			<< "\n3. Êóðèíûå íàãåòñû (" << snack_prise[2] << "ð.)"
			<< "\n4. Ïàñòà ñ êðåâòêàìè (" << snack_prise[3] << "ð.)"
			<< "\n\n0. Çàêîí÷èòü âûáîð\n ?> ";
		std::cin >> choice;

		for (int i = 1; i < snack_types + 1; i++)
		{
			if (choice > snack_types || choice < 0)
			{
				std::cout << "ÎØÈÁÊÀ\n";
				break;
			}
			else if (choice == 0)
			{
				break;
			}
			else if (choice == i)
			{
				system("cls");
				std::cout << "Ñóììà: " << total_cost << " + " << snack_prise[i - 1] << " = " << total_cost + snack_prise[i - 1] << std::endl;
				total_cost += snack_prise[i - 1];
				break;
			}

		}
		
	} while (choice != 0);

	return total_cost;
}

float ChoiñeDrink(float total_cost) {
	int choice{};

	const int drink_types = 5;
	int drink_prise[drink_types]{100, 199, 149, 249, 139};

	int drink_counter{};

	do {
		std::cout << "\n1. ßáëî÷íûé ñîê (" << drink_prise[0] << "ð.)"
			<< "\n2. Àïåëüñèíîâûé ñîê (" << drink_prise[1] << "ð.)"
			<< "\n3. Êîëà (" << drink_prise[2] << "ð.)"
			<< "\n4. ×àé ÷¸ðíûé (" << drink_prise[3] << "ð.)"
			<< "\n5. Êàêàî (" << drink_prise[4] << "ð.)"
			<< "\n\n0. Çàêîí÷èòü âûáîð\n ?> ";
		std::cin >> choice;
		
		for (int i = 1; i < drink_types + 1; i++)
		{
			if (choice > drink_types || choice < 0)
			{
				std::cout << "ÎØÈÁÊÀ\n";
				break;
			}
			else if (choice == 0)
			{
				break;
			}
			else if (choice == i)
			{
				system("cls");
				std::cout << "Ñóììà: " << total_cost << " + " << drink_prise[i-1] << " = " << total_cost + drink_prise[i-1] << std::endl;
				total_cost += drink_prise[i-1];
				break;
			}
			
		}

	} while (choice != 0);
	
	return total_cost;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true) 
	{
		float total_cost{}, pizza_amount{}, snack_amount{}, drink_amount{};

		pizza_amount += ChoiñePizza(total_cost);
		snack_amount += ChoiñeSnack(total_cost);
		drink_amount += ChoiñeDrink(total_cost);

		total_cost = pizza_amount + snack_amount + drink_amount;


		std::cout << "Òîòàëüíàÿ öåíà çàêàçà: " << total_cost << "ð. \n";
		system("pause");
	}




}
