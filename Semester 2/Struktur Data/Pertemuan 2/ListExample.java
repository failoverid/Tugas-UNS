import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class ListExample {
    public static void main(String[] args) {
        // Press Opt+Enter with your caret at the highlighted text to see how
        // IntelliJ IDEA suggests fixing it.
        int N = 100;

        long start = System.nanoTime();
        List<Integer> ll1 = makeList1(new LinkedList<Integer>(), N);
        System.out.println("Time taken by LinkedList = "+ (System.nanoTime() - start));

        start = System.nanoTime();
        List<Integer> al1 = makeList1(new ArrayList<Integer>(), N);
        System.out.println("Time taken by ArrayList = "+(System.nanoTime() - start));

        start = System.nanoTime();
        List<Integer> ll2 = makeList2(new LinkedList<Integer>(), N);
        System.out.println("Time taken by LinkedList 2 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        List<Integer> al2 = makeList2(new ArrayList<Integer>(), N);
        System.out.println("Time taken by ArrayList 2 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        int sum1 = sum(ll1);
        System.out.println("Time taken to sum by LinkedList 1 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        sum1 = sum(al1);
        System.out.println("Time taken to sum by ArrayList 1 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        sum1 = sum(ll2);
        System.out.println("Time taken to sum by LinkedList 2 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        sum1 = sum(al2);
        System.out.println("Time taken to sum by ArrayList 2 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        sum1 = sum(ll2);
        System.out.println("Time taken to sum by LinkedList 2 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        sum1 = sum(al2);
        System.out.println("Time taken to sum by ArrayList 2 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        removeEvensVer1(ll1);
        System.out.println("Time taken to remove by LinkedList 1 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        removeEvensVer1(al1);
        System.out.println("Time taken to remove by ArrayList 1 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        removeEvensVer1(ll2);
        System.out.println("Time taken to remove by LinkedList 2 = "+(System.nanoTime() - start));

        start = System.nanoTime();
        removeEvensVer1(al2);
        System.out.println("Time taken to remove by ArrayList 2 = "+(System.nanoTime() - start));
    }

    public static List<Integer> makeList1( List<Integer> lst, int N )
    {
        lst.clear( );
        for( int i = 0; i < N; i++ )
            lst.add( i );
        return lst;
    }

    public static List<Integer> makeList2( List<Integer> lst, int N )
    {
        lst.clear( );
        for( int i = 0; i < N; i++ )
            lst.add( 0, i );
        return lst;
    }

    public static int sum( List<Integer> lst )
    {
        int total = 0;
        for (Integer integer : lst) total += integer;
        return total;
    }

    public static void removeEvensVer1( List<Integer> lst )
    {
        int i = 0;
        while( i < lst.size( ) )
            if( lst.get( i ) % 2 == 0 )
                lst.remove( i );
            else
                i++;
    }

    public static void removeEvensVer2( List<Integer> lst )
    {
        for( Integer x : lst )
            if( x % 2 == 0 )
                lst.remove( x );
    }

    public static void removeEvensVer3( List<Integer> lst )
    {
        Iterator<Integer> itr = lst.iterator( );
        while( itr.hasNext( ) )
            if( itr.next( ) % 2 == 0 )  itr.remove( );
    }
}