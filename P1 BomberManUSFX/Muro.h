#pragma once
class Muro
{
private:
	int indestructibleMuro;
	int destructibleMuro;
public:
	int leerIndestructibleMuro() { return indestructibleMuro; }
	void setIndestructibleMuro(int _indestructibleMuro) { indestructibleMuro = _indestructibleMuro; }

	int leerdestructibleMuro() { return destructibleMuro; }
	void setdestructibleMuro(int _destructibleMuro) { destructibleMuro = _destructibleMuro; }
};

