class City{
	private int id;
	private String name;
	private int population;
	private String countryCode;

	City(int id_, String name_, String countryCode_, int population_){
		this.id = id_;
		this.name = name_;
		this.population = population_;
		this.countryCode = countryCode_;
	}

	int getId(){
		return this.id;
	}
	
	String getName(){
		return this.name;
	}
	String getCountryCode(){
		return this.countryCode;
	}
	int getPopulation(){
		return this.population;
	}
}