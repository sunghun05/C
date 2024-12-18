
struct position {
	double latitude;
	double	longitude;
};

int ex2(void) {

	struct city {
		char* name;
		struct position place;
	};
	struct city seoul, newyork;

	seoul.name = "????";
	seoul.place.latitude = 37.33;
	seoul.place.longitude = 126.58;

	newyork.name = "????";
	newyork.place.latitude = 40.8;
	newyork.place.longitude = 73.9;

	printf("[%s] ???? = %.1f ?? = %.1f\n",
		seoul.name, seoul.place.latitude, seoul.place.longitude);
	printf("[%s] ???? = %.1f ?? = %.1f\n",
		newyork.name, newyork.place.latitude, newyork.place.longitude); 

		return 0;
}