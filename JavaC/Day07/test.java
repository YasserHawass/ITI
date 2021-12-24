import java.util.stream.Stream;
import java.util.stream.Collectors;  
import java.util.stream.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.*;

class dict{
// yes it's best practice to be Capital, but for OS directory easiness
	public static void main(String args[]){
		String arr[] = { "apple", "arrow", "Azure", "Guava", "event", "thrill",

				"quack","responsible","afraid","moor","arch","harass","tame","worry","powerful","highfalutin",

				"normal","boorish","celery","closed","burly","superficial","fairies","writer","scary","repeat",
	
				"mouth","adjustment","foot","physical","squeamish","whine","reduce","fascinated","substantial",

				"whole","wrong","toothsome","deeply","best","fresh","lush","quartz","tart" };
		List<String> lista = Arrays.asList(arr).stream().parallel().map(String::toLowerCase).sorted().collect(Collectors.toList());
		//list.forEach(x -> System.out.println(x));
		List<Character> letters = lista.stream().map(x -> x.charAt(0)).distinct().collect(Collectors.toList());
 		//letters.forEach(x -> System.out.println(x));
		//Map.Entry<Character, List<String>> dictionary = lista.stream().collect( Collectors.groupingBy(x -> x.charAt(0) ) );
		HashMap<Character, ArrayList<String>> hdictionary = new HashMap<Character, ArrayList<String>>();
		//lista.forEach(x -> hdictionary.put(x.charAt(0), new ArrayList<String>()));

		//lista.stream().map( x -> {return new AbstractMap.SimpleEntry<Character, String>( x.charAt(0), x);}).forEach( x -> System.out.println(x) );
		Map<Character, List<String>> map = lista.stream().collect(Collectors.groupingBy(d -> d.charAt(0)));

		//hdictionary = lista.stream().map( x -> {return new AbstractMap.SimpleEntry<Character, String>( x.charAt(0), x);});
		printall(map);
		printChar(map,'a');

		

/*
		hdictionary = lista.stream()
				.collect(Collectors.toMap(
					x -> x.charAt(0),
					x -> x
				));
*/
		//System.out.println(map.entrySet());
		//System.out.println( printchar(map, 'a') );
		//hdictionary.put(lista.stream().map(x -> x.charAt(0)), lista.stream());
		
	}

	static void printall(Map<Character, List<String>> map) {
		for (Character key : map.keySet()) {
        		System.out.println(key + ":" + map.get(key));
    		}
	}

	static void printChar(Map<Character, List<String>> map, Character ch) {
        		System.out.println(map.get(ch));
	}

}