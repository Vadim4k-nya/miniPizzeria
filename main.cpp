#include <iostream>
#include <Windows.h>

float Choi�ePizza(float total_cost) {
	int choice{};

	const int pizza_types = 8;
	int pizza_prise[pizza_types]{100, 299, 249, 159, 299, 149, 399, 199};

	int pizza_counter{};

	do {
		std::cout << "\n1. ��������� (" << pizza_prise[0] << "�.)"
			<< "\n2. ������ ���� (" << pizza_prise[1] << "�.)"
			<< "\n3. ������ (" << pizza_prise[2] << "�.)"
			<< "\n4. ����������� (" << pizza_prise[3] << "�.)"
			<< "\n5. ��������� (" << pizza_prise[4] << "�.)"
			<< "\n6. ������� (" << pizza_prise[5] << "�.)"
			<< "\n7. ������� (" << pizza_prise[6] << "�.)"
			<< "\n8. ������� � ��� (" << pizza_prise[7] << "�.)"
			<< "\n\n0. ��������� �����\n ?> ";
		std::cin >> choice;

		pizza_counter ++;

		for (int i = 1; i < pizza_types+1; i++)
		{
			if (choice > pizza_types || choice < 0)
			{
				std::cout << "������\n";
				break;
			}
			else if (choice == 0 || pizza_counter % 5 == 0)
			{
				break;
			}
			else if (choice == i) 
			{
				system("cls");
				std::cout << "�����: " << total_cost << " + " << pizza_prise[i-1] << " = " << total_cost + pizza_prise[i-1] << std::endl;
				total_cost += pizza_prise[i-1];
				break;
			}
		}
	
	} while (choice != 0);
	
	return total_cost;
}

float Choi�eSnack(float total_cost) {
	int choice{};

	const int snack_types = 4;
	int snack_prise[snack_types]{ 100, 249, 149, 249};

	int snack_counter{};

	do {
		std::cout << "\n1. ������� ������� � ��� (" << snack_prise[0] << "�.)"
			<< "\n2. ����� ��������� (" << snack_prise[1] << "�.)"
			<< "\n3. ������� ������� (" << snack_prise[2] << "�.)"
			<< "\n4. ����� � ��������� (" << snack_prise[3] << "�.)"
			<< "\n\n0. ��������� �����\n ?> ";
		std::cin >> choice;

		for (int i = 1; i < snack_types + 1; i++)
		{
			if (choice > snack_types || choice < 0)
			{
				std::cout << "������\n";
				break;
			}
			else if (choice == 0)
			{
				break;
			}
			else if (choice == i)
			{
				system("cls");
				std::cout << "�����: " << total_cost << " + " << snack_prise[i - 1] << " = " << total_cost + snack_prise[i - 1] << std::endl;
				total_cost += snack_prise[i - 1];
				break;
			}

		}
		
	} while (choice != 0);

	return total_cost;
}

float Choi�eDrink(float total_cost) {
	int choice{};

	const int drink_types = 6;
	int drink_prise[drink_types]{100, 199, 149, 249, 139, 349};

	int drink_counter{};

	do {
		std::cout << "\n1. �������� ��� (" << drink_prise[0] << "�.)"
			<< "\n2. ������������ ��� (" << drink_prise[1] << "�.)"
			<< "\n3. ���� (" << drink_prise[2] << "�.)"
			<< "\n4. ��� ������ (" << drink_prise[3] << "�.)"
			<< "\n5. ����� (" << drink_prise[4] << "�.)"
			<< "\n6. �������� (" << drink_prise[5] << "�.)"
			<< "\n\n0. ��������� �����\n ?> ";
		std::cin >> choice;
		
		for (int i = 1; i < drink_types + 1; i++)
		{
			if (choice > drink_types || choice < 0)
			{
				std::cout << "������\n";
				break;
			}
			else if (choice == 0)
			{
				break;
			}
			else if (choice == i)
			{
				system("cls");
				std::cout << "�����: " << total_cost << " + " << drink_prise[i-1] << " = " << total_cost + drink_prise[i-1] << std::endl;
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

		pizza_amount += Choi�ePizza(total_cost);
		snack_amount += Choi�eSnack(total_cost);
		drink_amount += Choi�eDrink(total_cost);

		total_cost = pizza_amount + snack_amount + drink_amount;


		std::cout << "��������� ���� ������: " << total_cost << "�. \n";
		system("pause");
	}




}
