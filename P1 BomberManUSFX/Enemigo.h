#pragma once
class Enemigo
{
private:
	int atacarBomber;
	int matarBomber;
public:
	int leerAtacarBomber() { return atacarBomber; }
	void setAtacarBomber(int _atacarBomber) { atacarBomber = _atacarBomber; }

	int leerMatarBomber() { return matarBomber; }
	void setMatarBomber(int _matarBomber) { matarBomber = _matarBomber; }
};

