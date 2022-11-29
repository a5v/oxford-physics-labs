function [y] = solve_lorenz(y0 , a , b , r , t)
% Author: Aaron Vitarana, Date: 22/01/2020
% Solve Lorenz equations using the implemented ODE solver.
% Input:
% * y0: a column vector of the starting point with size (3 x 1)
% * a, b, r: parameters of the Lorenz equations
% * t: an N?element vector of time/position steps where y will be calculated
%
% Output:
% * y: a (3 x N) matrix that contains the values of y for every time step

% defining Lorenz functions
f1 = @(y1, y2, y3) (a*(y2-y1))
f2 = @(y1, y2, y3) (r*y1-y2-y1*y3)
f3 = @(y1, y2, y3) (y1*y2-b*y3)


% calls Runga-Kutta function to solve ODEs
% returns y: (M x N) matrix that contains the values of y at every position/time
% step and columns correspond to the position/time and rows to the element of y.
[y] = ode_solve_rk(f1, f2, f3, y0 , t)


% Example use:
% >> y0 = [0; 1; 0];
% >> a = 10;
% >> b = 8/3;
% >> r = 15;
% >> t = linspace(0, 10, 1000);
% >> y = solve_lorenz(y0, a, b, r, t);
% >> plot(t, y(1,:)); % plot y1 vs time
end

