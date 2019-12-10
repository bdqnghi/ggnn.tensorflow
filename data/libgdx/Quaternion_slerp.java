/**
 * Spherical linearly interpolates multiple quaternions by the given weights and stores the result in this Quaternion.
 * Will not destroy the data previously inside the elements of q or w.
 * result = (q_1^w_1)*(q_2^w_2)* ... *(q_n^w_n) where the sum of w_i is 1.
 * Lists must be equal in length.
 * @param q List of quaternions
 * @param w List of weights
 * @return This quaternion for chaining
 */
public Quaternion slerp(Quaternion[] q, float[] w) {
    // Calculate exponents and multiply everything from left to right
    set(q[0]).exp(w[0]);
    for (int i = 1; i < q.length; i++) mul(tmp1.set(q[i]).exp(w[i]));
    nor();
    return this;
}
