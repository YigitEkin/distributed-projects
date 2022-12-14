/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "sample.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

double *
average_1(argp, clnt)
	data *argp;
	CLIENT *clnt;
{
	static double clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, AVERAGE, xdr_data, argp, xdr_double, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

double *
variance_1(argp, clnt)
	data *argp;
	CLIENT *clnt;
{
	static double clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, VARIANCE, xdr_data, argp, xdr_double, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

double *
stddev_1(argp, clnt)
	data *argp;
	CLIENT *clnt;
{
	static double clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, STDDEV, xdr_data, argp, xdr_double, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

double *
minimum_1(argp, clnt)
	data *argp;
	CLIENT *clnt;
{
	static double clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MINIMUM, xdr_data, argp, xdr_double, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}

double *
maximum_1(argp, clnt)
	data *argp;
	CLIENT *clnt;
{
	static double clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, MAXIMUM, xdr_data, argp, xdr_double, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}
