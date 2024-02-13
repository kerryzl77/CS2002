/*
 * invoke.h
 *
 * The invoke macro defined here would permit you to use for example
 *
 *       invoke(p1, printDetails);
 *       invoke(p1, setAge, 101);
 *
 *  instead of
 *
 *       p1->printDetails(p1);
 *       p1->setAge(p1, 101);
 *
 */

#ifndef INVOKE_H
#define INVOKE_H

#define invoke(X, NAME, ...) (X->NAME(X, ##__VA_ARGS__ )) //

#endif /* INVOKE_H */
