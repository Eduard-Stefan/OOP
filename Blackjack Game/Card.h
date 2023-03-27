class Card
{
public:
	void SetNumber(int number);
	void SetSuit(int suit);
	void SetStatus(int status);
	int GetNumber();
	int GetSuit();
	int GetStatus();
	void PrintSuit();
private:
	int number;
	int suit;
	int status;
};