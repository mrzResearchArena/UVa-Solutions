/**
 * @author Rafsanjani Muhammod
 * @Title Kruskal Algorithms implements
 */

package oak;

import java.util.*;

class Node implements Comparable<Node>
{
    public String u;
    public String v;
    public int w;

    public Node(String u, String v, int w)
    {
        this.u = u;
        this.v = v;
        this.w = w;
    }

    @Override
    public int compareTo(Node other)
    {
        return this.w - other.w;
    }
}

public class Main
{
    public static Scanner in = new Scanner(System.in);
    public static Vector<Node> graph = new Vector<>();
    public static Map<String, String> parent = new HashMap<>();

    public static String find(String n)
    {
        if (parent.get(n) == n) return n;
        return find(parent.get(n));
    }

    public static void SEND()
    {
        int TC = in.nextInt();
        //System.out.println();

        boolean confirm = true;

        while (TC-- > 0)
        {
            int node = in.nextInt();
            int link = in.nextInt();

            int i = 0;
            while (i < link)
            {
                String u = in.next();
                String v = in.next();
                int w = in.nextInt();

                graph.add(new Node(u, v, w));
                parent.put(u, u);
                parent.put(v, v);

                i++;
            }
            Collections.sort(graph);

            int minimumCost = 0;
            int C = 0;

            i = 0;
            while (i < link)
            {
                String u = find(graph.get(i).u);
                String v = find(graph.get(i).v);

                if (u != v)
                {
                    parent.put(u, v);
                    minimumCost = minimumCost + graph.get(i).w;
                    C++;

                    if (C == (node - 1)) break;
                }
                i++;
            }
            if (!confirm)
            {
                System.out.println();
            }
            System.out.println(minimumCost);
            confirm=false;

            graph.clear();
            parent.clear();
            //minimumCost=0;
        }
    }


    public static void main(String[] args)
    {
        SEND();
    }
}

