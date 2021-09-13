#pragma once
class Explosion {
private:
	int ponerExplosion;
	int activarExplosion;
public:
	int leerPonerExplosion() { return ponerExplosion; }
	void setPonerExplosion(int _ponerExplosion) { ponerExplosion = _ponerExplosion; }

	int leerActivarExplosion() { return activarExplosion; }
	void setActivarExplosion(int _activarExplosion) { activarExplosion = _activarExplosion; }


};