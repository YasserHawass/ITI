import java.util.List;
import java.util.ArrayList;
class Country{
	private String code;
	private String name;
	private String continent;
	private double surfaceArea;
	private int population;
	private double gnp;
	private int capital;
	private List<City> cities;

	Country(String code_, String name_, String continent_, int population_, double surfaceArea_, double gnp_, int capital_){
		this.code = code_;
		this.name = name_;
		this.continent = continent_;
		this.surfaceArea = surfaceArea_;
		this.population = population_;
		this.gnp = gnp_;
		this.capital = capital_;
		this.cities = new ArrayList<City>();
	}
	String getName(){
		return this.name;
	}
	String getContinent(){
		return this.continent;
	}
	String getCode(){
		return this.code;
	}
	List<City> getCities(){
		return this.cities;
	}
	public int getCapital() {
		return capital;
	}
}