close all
clear all

% preset parameters
a = 10
b = 8/3
dt = 0.005 % time step

% user inputs remaining parameters

%{
y1_0 = input('y1(0): ')
y2_0 = input('y2(0): ')
y3_0 = input('y3(0): ')
r = input('r: ')
n = input('number of steps: ')

%}


% Example input
y1_0 = 4
y2_0 = 5
y3_0 = 6
r = 30
n = 5000 % number of steps


% time vector
end_time = n*dt
t = linspace(0, end_time, n);

% initial conditions
y0 = [y1_0; y2_0; y3_0];


% calls Lorentz solver
% returns y: (M x N) matrix that contains the values of y at every position/time
% step and columns correspond to the position/time and rows to the element of y.
[y] = solve_lorenz(y0 , a , b , r , t)





% plot graphs of y1 against time
figure(1)
plot(t, y(1,:));

title('Graph of y1 against Time')
xlabel('t') 
ylabel('y1')


% plot graphs of y2 against y3
figure(2)
plot(y(3,:), y(2,:));

title('Graph of y2 against y3')
xlabel('y3') 
ylabel('y2')


% plot graph of y1, y2 and y3 against time
figure(3)
plot(t, y(1,:));
hold on
plot(t, y(2,:));
hold on
plot(t, y(3,:));

title('Graph of Variables y1, y2 and y3 against Time')
xlabel('t') 
ylabel('y')
legend('y1', 'y2', 'y3')


% 3D plot of y1, y2 and y3
figure(4)
plot3(y(1,:), y(2,:), y(3,:))
xlabel('y1')
ylabel('y2')
zlabel('y3')


