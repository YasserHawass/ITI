import java.util.stream.Stream;
import java.util.stream.Collectors;  
import java.util.stream.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.*;

/*
Word Dictionary
- Develop and application that stores words in an array into a
collection.
- Create a map that uses the alphabets as keys and a
collection as values (This collection should only contain
words starting with the corresponding key)
- Elements in the words map for each alphabet should be
sorted
- Provide methods to print all the letters and corresponding
words
- Provide a method to print the words of a given letter
*/

class dict{
// yes it's best practice to be Capital, but for OS directory easiness
	public static void main(String args[]){
		String arr[] = { "apple", "arrow", "Azure", "Guava", "event", "thrill",

				"quack","responsible","afraid","moor","arch","harass","tame","worry","powerful","highfalutin",

				"normal","boorish","celery","closed","burly","superficial","fairies","writer","scary","repeat",
	
				"mouth","adjustment","foot","physical","squeamish","whine","reduce","fascinated","substantial",

				"whole","wrong","toothsome","deeply","best","fresh","lush","quartz","tart" };

		List<String> lista = Arrays.asList(arr).stream().parallel().map(String::toLowerCase).sorted().collect(Collectors.toList());
		
 		HashMap<Character, ArrayList<String>> hdictionary = new HashMap<Character, ArrayList<String>>();
		
		Map<Character, List<String>> map = lista.stream().collect(Collectors.groupingBy(d -> d.charAt(0)));

		printall(map);
		printChar(map,'a');
	}

	static void printall(Map<Character, List<String>> map) {
		for (Character key : map.keySet()) {
        		System.out.println(key + ":" + map.get(key));
    		}
	}

	static void printChar(Map<Character, List<String>> map, Character ch) {
        		System.out.println("letter '"+ch +"' words are: "+map.get(ch));
	}

}