import tensorflow as tf


def scoping(fn, scope1, scope2, vals):
    with fn(scope1):
        a = tf.Variable(vals[0], name='a')
        b = tf.get_variable('b', initializer=vals[1])
        c = tf.constant(vals[2], name='c')

        with fn(scope2):
            d = tf.add(a * b, c, name='res')
        
        ttt = [scope1, a.name, b.name, c.name, d.name]
        print("AAAA: " + str(ttt))
    
    with fn("scope_var2s"):
        a = tf.Variable(vals[0], name='ad')
        b = tf.get_variable('b', initializer=vals[1])
        c = tf.constant(vals[2], name='c')
    return d

d1 = scoping(tf.variable_scope, 'scope_vars', 'res', [1, 2, 3])
# d2 = scoping(tf.name_scope,     'scope_name', 'res', [1, 2, 3])

with tf.Session() as sess:
    writer = tf.summary.FileWriter('logs', sess.graph)
    sess.run(tf.global_variables_initializer())
    print(sess.run([d1]))
    writer.close()