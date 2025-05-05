package asteroid_collision_735;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Map;

public class Asteroid {

    public int[] asteroidCollision(int[] asteroids){

        Deque<Integer> dq = new ArrayDeque<>();

        for (int curr : asteroids) {

            boolean alive = true;

            while (alive && curr < 0 && !dq.isEmpty() && dq.peekLast() > 0) {

                int last = dq.peekLast();
                if (Math.abs(last) < Math.abs(curr)) {

                    dq.pollLast();
                    continue;

                } else if (Math.abs(last) == Math.abs(curr)) {

                    dq.pollLast();
                    alive = false;

                } else {
                    alive = false;
                }

                break;
            }

                if (alive)
                    dq.addLast(curr);

        }

        int[] toReturn = new int[dq.size()];
        int i = 0;
        for (int x : dq)
            toReturn[i++] = x;

        return toReturn;

    }

}
