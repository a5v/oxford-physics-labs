function [y] = ode_solve_rk(f1, f2, f3 , y0 , t)
% Author: Aaron Vitarana, Date: 22/01/2020
%
% Solve ODE problem, i.e. dy/dt = f(y,t), using Runge?Kutta algorithm.
% 
% Input:
% * f1: a function that receives the current states of y1, y2 and y3 and
% outputs a*(y2-y1)
% * f2: a function that receives the current states of y1, y2 and y3 and
% outputs r*y1-y2-y1*y3
% * f3: a function that receives the current states of y1, y2 and y3 and
% outputs y1*y2-b*y3
% * y0: the initial state of the system, given in a column matrix (M x 1).
% * t: vector of position/time steps with length N where the values of y will be returned.
%
% Output:
% y: (M x N) matrix that contains the values of y at every position/time
% step and columns correspond to the position/time and rows to the element of y.


% setting up initial vector and filling it with the initial conditions
y = zeros(3, length(t))
y(1, 1) = y0(1, 1); 
y(2, 1) = y0(2,1);
y(3, 1) = y0(3,1);


dt = abs(t(2) - t(1));

    
for a = 1:(length(t)-1) %iterate through all values of t except the largest value
    k1 = f1(y(1,a), y(2,a), y(3,a));
    l1 = f2(y(1,a), y(2,a), y(3,a));
    m1 = f3(y(1,a), y(2,a), y(3,a));
    k2 = f1(y(1,a) + 0.5*k1*dt, y(2,a) + 0.5*l1*dt, y(3,a) + 0.5*m1*dt);
    l2 = f2(y(1,a) + 0.5*k1*dt, y(2,a) + 0.5*l1*dt, y(3,a) + 0.5*m1*dt);
    m2 = f3(y(1,a) + 0.5*k1*dt, y(2,a) + 0.5*l1*dt, y(3,a) + 0.5*m1*dt);
    k3 = f1(y(1,a) + 0.5*k2*dt, y(2,a) + 0.5*l2*dt, y(3,a) + 0.5*m2*dt);
    l3 = f2(y(1,a) + 0.5*k2*dt, y(2,a) + 0.5*l2*dt, y(3,a) + 0.5*m2*dt);
    m3 = f3(y(1,a) + 0.5*k2*dt, y(2,a) + 0.5*l2*dt, y(3,a) + 0.5*m2*dt);
    k4 = f1(y(1,a) + k3*dt, y(2,a) + l3*dt, y(3,a) + m3*dt);
    l4 = f2(y(1,a) + k3*dt, y(2,a) + l3*dt, y(3,a) + m3*dt);
    m4 = f3(y(1,a) + k3*dt, y(2,a) + l3*dt, y(3,a) + m3*dt);
    
    y(1, a+1) = y(1, a) + (k1 + 2*k2 + 2*k3 + k4)*dt/6;
    y(2, a+1) = y(2, a) + (l1 + 2*l2 + 2*l3 + l4)*dt/6;
    y(3, a+1) = y(3, a) + (m1 + 2*m2 + 2*m3 + m4)*dt/6;
end


end