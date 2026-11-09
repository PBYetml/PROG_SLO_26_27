// Noah Rubin, TE1 PROG, 27.10.2026, SLO1

void main() {
	
	return;
}

void CutofInfo(unsigned long data) {
	char Tension, Courant;
	unsigned char Puissance, Resistance;
	Resistance = data & 0xFF;
	Puissance = (data & 0xFF00) >> 8;
	Courant = (data & 0xFF0000) >> 16;
	Tension = (data & 0xFF000000) >> 24;
}