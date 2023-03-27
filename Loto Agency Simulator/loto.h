class ball
{
public:
	ball();
	~ball();
	void generator(int v[]);
	void extragere(int v[]);
	void SetStatus();
	int verify(int v[]);
private:
	int* NumereleExtrase;
	int* status;
};